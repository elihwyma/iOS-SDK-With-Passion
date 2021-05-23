/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTSweetgumUserConsentFlowInfo : NSObject

{
    NSString *_webURL;
    NSString *_postData;
}

@property (retain, nonatomic) NSString *webURL;
@property (retain, nonatomic) NSString *postData;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
