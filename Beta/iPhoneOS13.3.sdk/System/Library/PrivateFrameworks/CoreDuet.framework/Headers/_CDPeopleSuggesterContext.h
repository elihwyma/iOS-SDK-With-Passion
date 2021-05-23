/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet, NSString, _CDInteraction;

@interface _CDPeopleSuggesterContext : NSObject

{
    NSDate *_date;
    NSString *_locationUUID;
    NSString *_title;
    NSString *_contactPrefix;
    NSSet *_seedContactIdentifiers;
    NSSet *_nearbyPeople;
    NSString *_consumerIdentifier;
    NSSet *_contentUTIs;
    _CDInteraction *_activeInteraction;
}

@property (retain) _CDInteraction *activeInteraction;
@property (retain) NSDate *date;
@property (retain) NSString *locationUUID;
@property (retain) NSString *title;
@property (retain) NSString *contactPrefix;
@property (retain) NSSet *seedContactIdentifiers;
@property (retain) NSSet *nearbyPeople;
@property (retain) NSString *consumerIdentifier;
@property (retain) NSSet *contentUTIs;

+ (id)currentContext;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
