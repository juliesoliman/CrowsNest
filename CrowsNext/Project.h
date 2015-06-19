//
//  Project.h
//  CrowsNext
//
//  Created by Julie Soliman on 6/19/15.
//  Copyright (c) 2015 Solstice Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Project : NSObject

@property (assign, nonatomic) NSUInteger identifier;
@property (strong, nonatomic) NSString *name;
@property (assign, nonatomic) BOOL status;
@property (assign, nonatomic) NSUInteger numberOfAvailableEndpoints;
@property (strong, nonatomic) NSArray *endpoints;

@end
