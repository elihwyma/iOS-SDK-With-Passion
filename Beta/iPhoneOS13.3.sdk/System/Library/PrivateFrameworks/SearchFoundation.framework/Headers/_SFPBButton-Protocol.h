/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, _SFPBImage;

@protocol _SFPBButton <Swift>

@property (retain, nonatomic) _SFPBImage *image;
@property (retain, nonatomic) _SFPBImage *selectedImage;
@property (nonatomic) _Bool isSelected;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
