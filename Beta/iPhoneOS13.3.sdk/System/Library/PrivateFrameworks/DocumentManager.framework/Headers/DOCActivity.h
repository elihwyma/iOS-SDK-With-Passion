/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <ShareSheet/UIActivity.h>

@class NSArray, NSString;

@protocol DOCItemActivityPerformer;

@interface DOCActivity : UIActivity

{
    id <DOCItemActivityPerformer> _actionPerformerProxy;
    NSArray *_items;
    NSString *_identifier;
    NSString *_imageName;
    NSString *_localizedTitle;
}

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *localizedTitle;
@property (readonly) id <DOCItemActivityPerformer> actionPerformerProxy;

+ (long long)activityCategory;
+ (id)activityWithIdentifier:(id)arg1 actionPerformerProxy:(id)arg2;
+ (id)_imageNameForActivityIdentifier:(id)arg1;
+ (id)_titleForActivityIdentifier:(id)arg1;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)performActivity;
- (id)initWithProxy:(id)arg1 identifier:(id)arg2;

@end
