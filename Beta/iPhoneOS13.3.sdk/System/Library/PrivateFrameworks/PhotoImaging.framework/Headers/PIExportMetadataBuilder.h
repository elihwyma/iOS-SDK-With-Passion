/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate, NSString, NSTimeZone;

@interface PIExportMetadataBuilder : NSObject

{
    NSDate *_creationDate;
    NSTimeZone *_creationTimeZone;
    NSString *_caption;
    NSString *_title;
    NSArray *_keywords;
    NSArray *_peopleNames;
    CLLocation *_location;
}

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSTimeZone *creationTimeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *peopleNames;
@property (copy, nonatomic) CLLocation *location;

- (id)init;
- (void)setCreationDate:(id)arg1 timeZone:(id)arg2;
- (id)combinedKeywordsAndPeople;

@end
