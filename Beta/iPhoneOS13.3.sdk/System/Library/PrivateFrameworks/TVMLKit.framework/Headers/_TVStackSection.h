/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackSection : NSObject

{
    double _sectionHeight;
    double _showcaseSectionHeight;
    long long _firstRowIndex;
    long long _rowCount;
    long long _firstItemRowIndex;
    struct UIEdgeInsets _sectionSpacing;
    struct UIEdgeInsets _showcaseSectionSpacing;
    struct TVRowMetrics _compoundRowMetrics;
}

@property (nonatomic) double sectionHeight;
@property (nonatomic) struct UIEdgeInsets sectionSpacing;
@property (nonatomic) struct TVRowMetrics compoundRowMetrics;
@property (nonatomic) double showcaseSectionHeight;
@property (nonatomic) struct UIEdgeInsets showcaseSectionSpacing;
@property (nonatomic) long long firstRowIndex;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long firstItemRowIndex;

- (id)debugDescription;

@end
