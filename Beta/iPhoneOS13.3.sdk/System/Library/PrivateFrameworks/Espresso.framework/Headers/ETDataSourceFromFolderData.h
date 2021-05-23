/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface ETDataSourceFromFolderData : NSObject

{
    _Bool _balanceClassesForTraining;
    int _numberOfClasses;
    NSString *_imagesDir;
    NSMutableDictionary *_folderToImages;
    NSArray *_imageFileNames;
    NSMutableArray *_classNames;
    NSMutableDictionary *_pathToClassIndex;
}

@property (retain, nonatomic) NSString *imagesDir;
@property (retain, nonatomic) NSMutableDictionary *folderToImages;
@property (retain, nonatomic) NSArray *imageFileNames;
@property (retain, nonatomic) NSMutableArray *classNames;
@property (retain, nonatomic) NSMutableDictionary *pathToClassIndex;
@property int numberOfClasses;
@property _Bool balanceClassesForTraining;

- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithFolder:(id)arg1 balanceClassesForTraining:(_Bool)arg2;
- (struct vImage_Buffer)bufferWithPath:(id)arg1;

@end
