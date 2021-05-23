/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <SearchFoundation/SFCustom.h>

@class NSString;

@interface PARCustomSearchResult : SFCustom

{
    NSString *_fbr;
    NSString *_srf;
}

@property (copy, nonatomic, readonly) NSString *fbr;
@property (copy, nonatomic, readonly) NSString *srf;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFBR:(id)arg1 srf:(id)arg2;

@end
