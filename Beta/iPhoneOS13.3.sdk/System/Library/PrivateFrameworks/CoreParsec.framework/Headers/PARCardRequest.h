/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/PARRequest.h>

@class NSURL;

@interface PARCardRequest : PARRequest

{
    NSURL *_cardURL;
}

@property (copy, nonatomic) NSURL *cardURL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)nwActivityLabel;

@end
