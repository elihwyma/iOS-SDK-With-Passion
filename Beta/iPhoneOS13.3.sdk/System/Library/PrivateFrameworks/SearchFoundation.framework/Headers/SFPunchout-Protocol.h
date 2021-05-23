/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFUserActivityData;

@protocol SFPunchout <Swift>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (retain, nonatomic) SFUserActivityData *userActivityData;
@property (copy, nonatomic) NSString *actionTarget;
@property (nonatomic) _Bool isRunnableInBackground;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
