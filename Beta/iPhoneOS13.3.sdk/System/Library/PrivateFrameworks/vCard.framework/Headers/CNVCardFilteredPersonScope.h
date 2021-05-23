/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject

{
    NSSet *_blacklist;
    unsigned long long _filterOptions;
}

@property (readonly) NSSet *blacklist;
@property (readonly) unsigned long long filterOptions;

- (_Bool)isEmpty;
- (id)initWithBlacklist:(id)arg1 options:(unsigned long long)arg2;

@end
