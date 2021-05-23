/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat;

@protocol _SFPBDynamicURLImageResource <Swift>

@property (retain, nonatomic) _SFPBGraphicalFloat *pixelWidth;
@property (retain, nonatomic) _SFPBGraphicalFloat *pixelHeight;
@property (copy, nonatomic) NSString *formatURL;
@property (nonatomic) _Bool supportsResizing;
@property (copy, nonatomic) NSArray *imageOptions;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addImageOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearImageOptions;
- (unsigned short)imageOptionsCount;
- (unsigned short)imageOptionsAtIndex: /* Error: Ran out of types for this method. */;

@end
