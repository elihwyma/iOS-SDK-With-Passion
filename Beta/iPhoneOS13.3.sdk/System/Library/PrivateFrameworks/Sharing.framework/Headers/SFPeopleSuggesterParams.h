/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SFPeopleSuggesterParams : NSObject

{
    unsigned int _flags;
    unsigned int _maxPeople;
    NSArray *_contactIDs;
}

@property (copy, nonatomic) NSArray *contactIDs;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned int maxPeople;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
