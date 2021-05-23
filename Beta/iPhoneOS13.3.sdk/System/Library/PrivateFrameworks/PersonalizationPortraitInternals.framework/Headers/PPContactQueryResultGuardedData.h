/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError;

@interface PPContactQueryResultGuardedData : NSObject

{
    _Bool _joined;
    NSArray *_cnContacts;
    NSArray *_fiaContacts;
    NSError *_latestError;
}

@property (retain, nonatomic) NSArray *cnContacts;
@property (retain, nonatomic) NSArray *fiaContacts;
@property (retain, nonatomic) NSError *latestError;
@property (nonatomic) _Bool joined;

@end
