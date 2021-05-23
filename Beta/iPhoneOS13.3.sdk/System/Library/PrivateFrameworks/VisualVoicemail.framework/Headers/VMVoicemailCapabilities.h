/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

#import <VisualVoicemail/Swift-Protocol.h>

@interface VMVoicemailCapabilities : NSObject <Swift>

{
    _Bool _transcriptionEnabled;
}

@property (nonatomic, readonly, getter=isTranscriptionEnabled) _Bool transcriptionEnabled;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCapabilities:(id)arg1;
- (id)archivedDataWithError:(id *)arg1;
- (id)initWithCapabilities:(id)arg1;
- (id)initWithTranscriptionEnabled:(_Bool)arg1;

@end
