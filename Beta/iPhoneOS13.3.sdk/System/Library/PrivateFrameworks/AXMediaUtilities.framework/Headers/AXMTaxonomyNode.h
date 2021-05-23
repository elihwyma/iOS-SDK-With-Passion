/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXMTaxonomyNode : NSObject

{
    NSString *_label;
    NSString *_localizedName;
    double _confidence;
}

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic) double confidence;

@end
