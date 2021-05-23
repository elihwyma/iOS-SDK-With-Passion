/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBActionItem, _SFPBURL;

@protocol _SFPBTrack <Swift>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSString *duration;
@property (nonatomic) _Bool highlighted;
@property (retain, nonatomic) _SFPBURL *preview;
@property (retain, nonatomic) _SFPBActionItem *playAction;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
