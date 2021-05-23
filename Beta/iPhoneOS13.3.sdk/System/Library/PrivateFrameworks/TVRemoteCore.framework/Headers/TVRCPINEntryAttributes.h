/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TVRCPINEntryAttributes : NSObject

{
    NSArray *_groupLengths;
}

@property (nonatomic, readonly) unsigned long long totalDigitCount;
@property (nonatomic, readonly) unsigned long long numberOfDigitGroups;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigitCount:(unsigned long long)arg1;
- (unsigned long long)numberOfDigitsInGroup:(unsigned long long)arg1;
- (id)initWithGroupLengths:(id)arg1;

@end
