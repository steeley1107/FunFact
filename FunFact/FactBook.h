//
//  FactBook.h
//  Did You Know
//
//  Created by Steele on 2015-09-13.
//  Copyright (c) 2015 Steele. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
