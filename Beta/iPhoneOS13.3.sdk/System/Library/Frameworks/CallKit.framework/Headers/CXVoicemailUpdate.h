/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class CXHandle, NSDate, NSString, NSURL, NSUUID;

@interface CXVoicemailUpdate : NSObject <Swift>

{
    _Bool _played;
    _Bool _trashed;
    struct CXVoicemailUpdateHasSet _hasSet;
    NSUUID *_voicemailUUID;
    CXHandle *_sender;
    NSDate *_dateReceived;
    NSURL *_audioFileURL;
    NSUUID *_UUID;
}

@property (nonatomic) struct CXVoicemailUpdateHasSet hasSet;
@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSUUID *voicemailUUID;
@property (copy, nonatomic) CXHandle *sender;
@property (copy, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSURL *audioFileURL;
@property (nonatomic, getter=isPlayed) _Bool played;
@property (nonatomic, getter=isTrashed) _Bool trashed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoicemailUUID:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;

@end
