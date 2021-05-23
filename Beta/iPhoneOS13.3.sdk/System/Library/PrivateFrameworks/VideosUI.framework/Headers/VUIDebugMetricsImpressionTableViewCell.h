/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsImpressionTableViewCell : UITableViewCell

{
    VUILabel *_nameLabel;
    VUILabel *_typeLabel;
    VUILabel *_staticIDLabel;
    VUILabel *_idLabel;
    VUILabel *_idTypeLabel;
    VUILabel *_staticImpressionIdLabel;
    VUILabel *_impressionIdLabel;
    VUILabel *_staticImpressionIndexLabel;
    VUILabel *_impressionIndexLabel;
    VUILabel *_staticImpressionParentLabel;
    VUILabel *_impressionParentIdLabel;
    VUILabel *_impressionParentNameLabel;
}

@property (retain, nonatomic) VUILabel *nameLabel;
@property (retain, nonatomic) VUILabel *typeLabel;
@property (retain, nonatomic) VUILabel *staticIDLabel;
@property (retain, nonatomic) VUILabel *idLabel;
@property (retain, nonatomic) VUILabel *idTypeLabel;
@property (retain, nonatomic) VUILabel *staticImpressionIdLabel;
@property (retain, nonatomic) VUILabel *impressionIdLabel;
@property (retain, nonatomic) VUILabel *staticImpressionIndexLabel;
@property (retain, nonatomic) VUILabel *impressionIndexLabel;
@property (retain, nonatomic) VUILabel *staticImpressionParentLabel;
@property (retain, nonatomic) VUILabel *impressionParentIdLabel;
@property (retain, nonatomic) VUILabel *impressionParentNameLabel;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *idType;
@property (copy, nonatomic) NSString *impressionId;
@property (copy, nonatomic) NSString *impressionIndex;
@property (copy, nonatomic) NSString *impressionParentId;
@property (copy, nonatomic) NSString *impressionParentName;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
