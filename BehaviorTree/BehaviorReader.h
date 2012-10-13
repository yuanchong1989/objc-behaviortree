//
//  BehaviorReader.h
//  BehaviorTree
//
//  Created by Andrew O'Connor on 13/10/2012.
//  Copyright (c) 2012 Andrew O'Connor. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BehaviorReader : NSObject

-(id) buildTree:(NSDictionary*)data;
-(id) buildTreeWithFile:(NSString*)jsonPath;

@end
