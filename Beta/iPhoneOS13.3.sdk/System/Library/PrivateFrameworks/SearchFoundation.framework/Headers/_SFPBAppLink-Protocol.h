/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBImage, _SFPBPunchout;

@protocol _SFPBAppLink <Swift>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBPunchout *appPunchout;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
