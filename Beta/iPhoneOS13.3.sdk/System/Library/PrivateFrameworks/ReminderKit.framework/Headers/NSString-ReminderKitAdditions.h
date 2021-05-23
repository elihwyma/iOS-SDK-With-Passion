/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSString.h>

#import <ReminderKit/Swift-Protocol.h>

@interface NSString (ReminderKitAdditions) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)rem_registerClassAtCRCoderIfNeeded;

- (id)tombstone;
- (void)setDocument:(id)arg1;
- (_Bool)rem_hasPrefixCaseInsensitive:(id)arg1;
- (_Bool)rem_hasMailto;
- (_Bool)rem_hasTel;
- (id)rem_addingMailto;
- (id)rem_removingMailto;
- (id)rem_addingTel;
- (id)rem_removingTel;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;

@end
