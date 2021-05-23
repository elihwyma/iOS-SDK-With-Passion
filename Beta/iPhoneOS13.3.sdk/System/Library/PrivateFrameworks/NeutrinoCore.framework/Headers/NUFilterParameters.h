/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface NUFilterParameters : NSObject

{
    NSDictionary *_inputNodes;
    NSDictionary *_settings;
}

@property (copy) NSDictionary *inputNodes;
@property (copy) NSDictionary *settings;

- (id)init;
- (id)description;

@end
