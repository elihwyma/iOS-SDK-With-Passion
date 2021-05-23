/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

#import <VisualVoicemail/Swift-Protocol.h>

@class NSURL;

@interface VMVoicemailGreeting : NSObject <Swift>

{
    double _duration;
    unsigned long long _type;
    NSURL *_url;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSURL *url;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
