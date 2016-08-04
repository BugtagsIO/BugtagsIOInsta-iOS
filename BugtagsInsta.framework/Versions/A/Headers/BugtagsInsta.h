//
//  BugtagsInsta/BugtagsInsta.h
//
//  Contains:   API for using BugtagsInsta's SDK.
//
//  Version:    1.0.4
//
//  Created by Bugtags on 2016-06-10.
//
//  Copyright (c) 2016 Bugtags, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * The APIs for using BugtagsInsta's SDK, for more details about the SDK, please visit https://docs.bugtags.io/bugtagsinsta/
 */
@interface BugtagsInsta : NSObject

/**
 * Initialize the BugtagsInsta SDK with default listening port 10222
 * @return
 */
- (instancetype)init;

/**
 * Initialize the BugtagsInsta SDK with custom port
 * @param port - The listening port for BugtagsInsta
 * @return
 */
- (instancetype)initWithPort:(NSUInteger)port;

@end