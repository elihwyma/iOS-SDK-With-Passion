/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TVHighlightGroup : NSObject

{
    NSString *_localizedName;
    NSArray *_highlights;
}

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSArray *highlights;

@end
