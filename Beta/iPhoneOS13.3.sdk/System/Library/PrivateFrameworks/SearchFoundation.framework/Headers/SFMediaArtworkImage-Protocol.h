/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFMediaArtworkImage <Swift>

@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *spotlightIdentifier;
@property (nonatomic) int mediaEntityType;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
