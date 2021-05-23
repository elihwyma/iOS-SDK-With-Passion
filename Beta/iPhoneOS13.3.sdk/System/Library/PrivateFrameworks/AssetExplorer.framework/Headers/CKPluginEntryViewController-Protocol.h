/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <AssetExplorer/Swift-Protocol.h>

@protocol CKPluginEntryViewControllerDelegate;

@protocol CKPluginEntryViewController <Swift>

@property (weak, nonatomic) id <CKPluginEntryViewControllerDelegate> entryViewDelegate;
@property (readonly) _Bool wantsClearButton;
@property (readonly) _Bool wantsEdgeToEdgeLayout;
@property (readonly) _Bool loadedContentView;

- (unsigned short)sizeThatFits: /* Error: Ran out of types for this method. */;

@end
