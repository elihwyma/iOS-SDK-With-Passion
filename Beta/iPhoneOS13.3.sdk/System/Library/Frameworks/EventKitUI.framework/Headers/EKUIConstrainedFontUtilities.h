/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@interface EKUIConstrainedFontUtilities : NSObject

+ (void)initialize;
+ (void)clearFontCaches;
+ (id)constrainedFontForTextStyle:(id)arg1 minimumContentSizeCategory:(id)arg2 maximumContentSizeCategory:(id)arg3 traitCollection:(id)arg4;
+ (id)constrainedBodyTextLabelFont;
+ (id)constrainedCaption1TextLabelFont;
+ (id)constrainedBodyBoldTextLabelFont;
+ (id)constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 traitCollection:(id)arg3;
+ (id)constrainedFontForTextStyle:(id)arg1 minimumContentSizeCategory:(id)arg2 traitCollection:(id)arg3;
+ (long long)tableViewCellCappedSymbolImageScaleWithScale:(long long)arg1 traitCollection:(id)arg2;

@end
