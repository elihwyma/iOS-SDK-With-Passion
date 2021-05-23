/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PLUniformTypeIdentifierIdentity;

@interface PLVirtualResourceUniformTypeIdentifierProxy : NSObject

{
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentiferID;
}

@property (retain, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentiferID;
@property (nonatomic, readonly) _Bool conformsToImage;
@property (nonatomic, readonly) NSString *identifier;

- (id)initWithUniformTypeIdentiferID:(id)arg1;

@end
