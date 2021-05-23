/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAction : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)actionWithDictionary:(id)arg1 viewElement:(id)arg2 appContext:(id)arg3;

- (_Bool)isAccountRequired;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
