/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class CXHandle, NSDate, NSURL, NSUUID;

@interface CXVoicemail : NSObject

{
    _Bool _played;
    _Bool _trashed;
    NSUUID *_UUID;
    CXHandle *_sender;
    NSDate *_dateReceived;
    NSURL *_audioFileURL;
}

@property (copy, nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic) CXHandle *sender;
@property (copy, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSURL *audioFileURL;
@property (nonatomic, getter=isPlayed) _Bool played;
@property (nonatomic, getter=isTrashed) _Bool trashed;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (_Bool)isEqualToVoicemail:(id)arg1;

@end
