/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, UIViewController;

@protocol PXCMMSuggestion;

@protocol PXMutableMessagesExtensionViewModel <Swift>

@property (retain, nonatomic) id <PXCMMSuggestion> selectedSuggestion;
@property (retain, nonatomic) NSURL *selectedURL;
@property (nonatomic) unsigned long long selectedActivityType;
@property (copy, nonatomic) NSString *selectedMessageText;
@property (retain, nonatomic) NSDate *selectedMessageDate;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic) _Bool drawerActive;

- (unsigned short)clearSelection;

@end
