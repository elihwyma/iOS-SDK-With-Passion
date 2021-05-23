/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXOEmbedResponse.h>

@class NSString;

@interface SXOEmbedVideoResponse : SXOEmbedResponse

@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) NSString *HTML;
@property (nonatomic, readonly) struct CGSize size;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;

@end
