/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REImage;

@interface REImageContentProvider : NSObject

{
    REImage *_onePieceImage;
    REImage *_twoPieceForegroundImage;
    REImage *_twoPieceBackgroundImage;
}

@property (nonatomic, readonly) REImage *onePieceImage;
@property (nonatomic, readonly) REImage *twoPieceForegroundImage;
@property (nonatomic, readonly) REImage *twoPieceBackgroundImage;

+ (_Bool)supportsSecureCoding;
+ (id)imageContentProviderWithOnePieceImage:(id)arg1;
+ (id)imageContentProviderWithOnePieceImage:(id)arg1 twoPieceForegroundImage:(id)arg2 twoPieceBackgroundImage:(id)arg3;
+ (id)imageContentProviderFromClockKitImageProvider:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)clockKitImageProviderRepresentation;
- (id)initWithImage:(id)arg1 foregroundImage:(id)arg2 backgroundImage:(id)arg3;

@end
