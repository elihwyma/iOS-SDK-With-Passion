/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _CPPunchoutForFeedback <Swift>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int knownBundleIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichBundleid;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)urlsCount;
- (unsigned short)clearUrls;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addUrls: /* Error: Ran out of types for this method. */;
- (unsigned short)urlsAtIndex: /* Error: Ran out of types for this method. */;

@end
