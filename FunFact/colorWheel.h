//
//  colorWheel.h
//  FunFact
//
//  Created by Steele on 2015-09-13.
//  Copyright (c) 2015 Steele. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface colorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

-(UIColor *)randomColor;

@end
