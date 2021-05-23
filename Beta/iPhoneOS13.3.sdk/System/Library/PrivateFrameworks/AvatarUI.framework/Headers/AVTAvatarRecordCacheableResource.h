/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTUIEnvironment, NSString;

@protocol AVTAvatarRecord;

@interface AVTAvatarRecordCacheableResource : NSObject

{
    _Bool _includeAvatarData;
    id <AVTAvatarRecord> _record;
    AVTUIEnvironment *_environment;
}

@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) _Bool includeAvatarData;
@property (nonatomic, readonly) id <AVTAvatarRecord> record;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)persistentIdentifierPrefixForRecordWithIdentifier:(id)arg1;
+ (id)persistentIdentifierForRecordData:(id)arg1;

- (_Bool)requiresEncryption;
- (id)initWithAvatarRecord:(id)arg1 includeAvatarData:(_Bool)arg2 environment:(id)arg3;
- (id)volatileIdentifierForScope:(id)arg1;
- (unsigned long long)costForScope:(id)arg1;
- (id)tokenForObservingChangesWithHandler:(CDUnknownBlockType)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (id)identifierForScope:(id)arg1;

@end
