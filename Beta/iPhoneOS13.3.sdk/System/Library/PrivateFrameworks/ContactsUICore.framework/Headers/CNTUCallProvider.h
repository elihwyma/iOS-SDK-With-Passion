/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSSet, NSString, TUCallProvider;

@interface CNTUCallProvider : NSObject

{
    TUCallProvider *_callProvider;
}

@property (copy, nonatomic) TUCallProvider *callProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool supportsAudio;
@property (nonatomic, readonly) _Bool supportsVideo;
@property (copy, nonatomic, readonly) NSSet *supportedHandleTypes;

- (id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(_Bool)arg3;
- (id)initWithCallProvider:(id)arg1;

@end
