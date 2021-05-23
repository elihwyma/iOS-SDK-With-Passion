/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CTVoicemailInfoType : NSObject

{
    _Bool _available;
    _Bool _isNetworkOriginated;
    _Bool _isVoiceMailMWI;
    NSString *_url;
    NSNumber *_count;
}

@property (retain, nonatomic) NSString *url;
@property (nonatomic) _Bool available;
@property (retain, nonatomic) NSNumber *count;
@property (nonatomic) _Bool isNetworkOriginated;
@property (nonatomic) _Bool isVoiceMailMWI;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCTVoicemailInfoType:(id)arg1;
- (id)initWithParam:(id)arg1 available:(_Bool)arg2 count:(id)arg3 isNetworkOriginated:(_Bool)arg4 isVoiceMailMWI:(_Bool)arg5;

@end
