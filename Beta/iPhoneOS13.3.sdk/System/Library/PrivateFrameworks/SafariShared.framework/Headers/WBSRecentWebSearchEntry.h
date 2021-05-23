/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface WBSRecentWebSearchEntry : NSObject

{
    NSString *_searchString;
    NSDate *_date;
}

@property (readonly) NSString *searchString;
@property (readonly) NSDate *date;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithSearchString:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSearchString:(id)arg1 date:(id)arg2;

@end
