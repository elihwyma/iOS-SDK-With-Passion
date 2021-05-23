/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/PARRequest.h>

@class NSURL;

@interface PARMoreResultsRequest : PARRequest

{
    NSURL *_moreResultsURL;
}

@property (copy, nonatomic) NSURL *moreResultsURL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)nwActivityLabel;

@end
