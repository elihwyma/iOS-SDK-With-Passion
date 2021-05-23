/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFContactImage <Swift>

@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (nonatomic) _Bool threeDTouchEnabled;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
