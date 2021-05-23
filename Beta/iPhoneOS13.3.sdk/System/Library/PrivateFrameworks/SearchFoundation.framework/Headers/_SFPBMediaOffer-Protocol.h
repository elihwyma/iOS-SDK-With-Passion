/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBActionItem, _SFPBImage;

@protocol _SFPBMediaOffer <Swift>

@property (retain, nonatomic) _SFPBActionItem *actionItem;
@property (copy, nonatomic) NSString *sublabel;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (nonatomic) _Bool isEnabled;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
