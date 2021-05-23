/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, SUClientInterface, SUGradient, SUPageSectionGroup, SUSearchFieldConfiguration, UIColor, UIImage;

@interface SUSection : NSObject

{
    SUClientInterface *_clientInterface;
    NSMutableDictionary *_dictionary;
    UIImage *_image;
    UIImage *_moreListImage;
    SUSearchFieldConfiguration *_searchFieldConfiguration;
    NSMutableDictionary *_sectionButtonImages;
    UIImage *_selectedImage;
    UIImage *_selectedMoreListImage;
}

@property (retain, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration;
@property (nonatomic, readonly) SUGradient *backgroundGradient;
@property (nonatomic, readonly) long long defaultPNGStyle;
@property (nonatomic, readonly) UIColor *loadingIndicatorColor;
@property (nonatomic, readonly) UIColor *loadingTextColor;
@property (nonatomic, readonly) UIColor *loadingTextShadowColor;
@property (nonatomic, readonly, getter=isDefaultSection) _Bool defaultSection;
@property (nonatomic, readonly, getter=isTransient) _Bool transient;
@property (nonatomic, readonly, getter=isUsingLocalArtwork) _Bool usingLocalArtwork;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long minimumNetworkType;
@property (nonatomic, readonly) SUPageSectionGroup *pageSectionGroup;
@property (nonatomic, readonly) NSString *partnerHeader;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *urlBagKey;
@property (nonatomic, readonly) NSArray *itemImages;
@property (nonatomic, readonly) NSArray *leftSectionButtons;
@property (nonatomic, readonly) NSArray *rightSectionButtons;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *moreListImage;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImage *selectedMoreListImage;

- (void)dealloc;
- (id)description;
- (id)valueForProperty:(id)arg1;
- (id)initWithClientInterface:(id)arg1 sectionType:(long long)arg2 defaultPNGStyle:(long long)arg3;
- (id)initWithClientInterface:(id)arg1;
- (id)_imageBaseName;
- (id)_sectionButtonsForKey:(id)arg1;
- (id)_colorForKey:(id)arg1;
- (long long)_minimumNetworkTypeFromDictionary:(id)arg1;
- (long long)_typeForString:(id)arg1;
- (id)imageForSectionButtonWithTag:(long long)arg1;
- (_Bool)loadFromDictionary:(id)arg1 searchField:(id)arg2;
- (void)setSectionButtonImage:(id)arg1 forTag:(long long)arg2;

@end
