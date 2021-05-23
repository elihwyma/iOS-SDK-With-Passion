/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@protocol SFProduct <Swift>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSURL *availabilityURL;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) _Bool buyable;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
