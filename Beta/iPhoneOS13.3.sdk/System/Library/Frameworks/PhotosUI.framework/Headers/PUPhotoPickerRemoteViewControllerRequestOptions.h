/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSUUID;

@interface PUPhotoPickerRemoteViewControllerRequestOptions : NSObject

{
    NSUUID *_requestedIdentifier;
    NSString *_requestedClassName;
    NSDictionary *_photoPickerProperties;
}

@property (retain, nonatomic) NSUUID *requestedIdentifier;
@property (copy, nonatomic) NSString *requestedClassName;
@property (copy, nonatomic) NSDictionary *photoPickerProperties;
@property (nonatomic, readonly) long long modalPresentationStyle;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) unsigned long long savingOptions;
@property (nonatomic, readonly) NSArray *mediaTypes;
@property (nonatomic, readonly) _Bool allowsMultipleSelection;
@property (nonatomic, readonly) unsigned long long multipleSelectionLimit;
@property (nonatomic, readonly) _Bool requiresPickingConfirmation;
@property (nonatomic, readonly) _Bool showsFileSizePicker;
@property (nonatomic, readonly) _Bool showsPrompt;
@property (nonatomic, readonly) _Bool convertAutoloopsToGIF;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestedClassName:(id)arg1 photoPickerProperties:(id)arg2;
- (id)initWithRequestedIdentifier:(id)arg1 photoPickerProperties:(id)arg2;

@end
