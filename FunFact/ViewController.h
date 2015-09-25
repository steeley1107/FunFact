//
//  ViewController.h
//  FunFact
//
//  Created by Steele on 2015-09-13.
//  Copyright (c) 2015 Steele. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FactBook;
@class colorWheel;

@interface ViewController : UIViewController

@property (strong, nonatomic) FactBook *factBook;

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@property (strong, nonatomic) colorWheel *colorWheel;

@property (strong, nonatomic) IBOutlet UIView *funFactButton;

@end

