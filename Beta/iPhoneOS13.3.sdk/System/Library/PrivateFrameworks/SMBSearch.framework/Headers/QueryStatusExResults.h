/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@interface QueryStatusExResults : NSObject

{
    unsigned int _qStatus;
    unsigned int _cFilteredDocuments;
    unsigned int _cDocumentsToFilter;
    unsigned int _dwRatioFinishedDenominator;
    unsigned int _dwRatioFinishedNumerator;
    unsigned int _rowsetBookMark;
    unsigned int _cRowsTotal;
    unsigned int _maxRank;
    unsigned int _cResultsFound;
    unsigned int _whereID;
}

@property unsigned int qStatus;
@property unsigned int cFilteredDocuments;
@property unsigned int cDocumentsToFilter;
@property unsigned int dwRatioFinishedDenominator;
@property unsigned int dwRatioFinishedNumerator;
@property unsigned int rowsetBookMark;
@property unsigned int cRowsTotal;
@property unsigned int maxRank;
@property unsigned int cResultsFound;
@property unsigned int whereID;

- (id)init;

@end
