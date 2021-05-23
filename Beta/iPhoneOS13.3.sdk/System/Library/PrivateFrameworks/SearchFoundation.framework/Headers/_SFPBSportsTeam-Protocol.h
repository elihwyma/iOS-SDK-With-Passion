/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBImage;

@protocol _SFPBSportsTeam <Swift>

@property (retain, nonatomic) _SFPBImage *logo;
@property (copy, nonatomic) NSString *record;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
