/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PTOutlet : NSObject

{
    unsigned long long _nextToken;
    NSMutableDictionary *_actionsByToken;
}

- (id)_init;
- (struct NSNumber *)addAction:(CDUnknownBlockType)arg1;
- (void)_invokeActions;
- (void)removeActionForToken:(struct NSNumber *)arg1;

@end
