/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBUserActivityData;

@protocol _SFPBPunchout <Swift>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (retain, nonatomic) _SFPBUserActivityData *userActivityData;
@property (copy, nonatomic) NSString *actionTarget;
@property (nonatomic) _Bool isRunnableInBackground;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)urlsCount;
- (unsigned short)clearUrls;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addUrls: /* Error: Ran out of types for this method. */;
- (unsigned short)urlsAtIndex: /* Error: Ran out of types for this method. */;

@end
