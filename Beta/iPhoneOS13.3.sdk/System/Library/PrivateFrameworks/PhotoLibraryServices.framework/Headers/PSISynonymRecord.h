/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PSISynonymRecord : NSObject

{
    short _category;
    NSString *_synonym;
}

@property (copy, nonatomic) NSString *synonym;
@property (nonatomic) short category;

- (id)initWithSynonym:(id)arg1 category:(short)arg2;

@end
