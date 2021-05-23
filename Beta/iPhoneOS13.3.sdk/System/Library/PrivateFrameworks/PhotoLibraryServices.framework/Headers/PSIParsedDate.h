/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PSIParsedDate : NSObject

{
    NSDictionary *_attributes;
    struct _NSRange _range;
    struct _NSRange _extensionRange;
}

@property (copy, nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) struct _NSRange range;
@property (nonatomic, readonly) struct _NSRange extensionRange;

- (id)initWithAttributes:(id)arg1 range:(struct _NSRange)arg2 extensionRange:(struct _NSRange)arg3;

@end
