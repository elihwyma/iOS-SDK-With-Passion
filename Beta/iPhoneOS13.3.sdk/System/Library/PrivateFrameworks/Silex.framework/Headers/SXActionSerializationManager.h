/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SXActionSerializationManager : NSObject

{
    NSMutableDictionary *_serializers;
}

@property (nonatomic, readonly) NSMutableDictionary *serializers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)URLForAction:(id)arg1 type:(long long)arg2;
- (void)registerSerializer:(id)arg1 actionType:(id)arg2;

@end
