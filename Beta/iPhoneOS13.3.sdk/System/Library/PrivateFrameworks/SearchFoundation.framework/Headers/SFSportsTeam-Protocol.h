/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage;

@protocol SFSportsTeam <Swift>

@property (retain, nonatomic) SFImage *logo;
@property (copy, nonatomic) NSString *record;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
